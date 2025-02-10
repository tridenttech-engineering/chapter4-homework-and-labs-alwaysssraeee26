#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <unistd.h> // For STDIN_FILENO, STDOUT_FILENO, dup, dup2, and close
using namespace std;

void runTest() {
  // Test case input
  string input = "10\n5\n";
  string expected_value = "785";

  // Create temporary files for input and output redirection
  FILE *input_file = tmpfile();
  FILE *output_file = tmpfile();

  // Write the input to the input file
  fputs(input.c_str(), input_file);
  rewind(input_file);

  // Redirect stdin to the input file
  int input_fd = fileno(input_file);
  int saved_stdin_fd = dup(STDIN_FILENO);
  dup2(input_fd, STDIN_FILENO);

  // Redirect stdout to the output file
  int output_fd = fileno(output_file);
  int saved_stdout_fd = dup(STDOUT_FILENO);
  dup2(output_fd, STDOUT_FILENO);

  // Call the original program's main function
  int result = system("./lab4-4");

  // Restore stdin and stdout
  dup2(saved_stdin_fd, STDIN_FILENO);
  dup2(saved_stdout_fd, STDOUT_FILENO);
  close(saved_stdin_fd);
  close(saved_stdout_fd);

  // Check if the system call was successful
  if (result != 0) {
    cout << "Test Failed: Program did not run successfully" << endl;
    exit(-1);
  }

  // Read the output from the output file
  rewind(output_file);
  char buffer[256];
  string actual_output;
  while (fgets(buffer, sizeof(buffer), output_file)) {
    actual_output += buffer;
  }
