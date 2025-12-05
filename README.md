# Cubic Equation Solver

This project is a C program that reads the coefficients of a cubic equation, solves it, and displays the solutions in the format x+iy, where x and y are real numbers representing the complex roots.

## Features

- Reads coefficients of a cubic equation from the user.
- Solves the equation and handles both real and complex roots.
- Displays the solutions in the format x+iy.

## Files

- `src/main.c`: Entry point of the program.
- `src/solver.c`: Implementation of the cubic equation solver.
- `src/solver.h`: Header file for the solver functions.
- `include/complex.h`: Header file for complex number operations.
- `Makefile`: Build instructions for the project.
- `.gitignore`: Specifies files to ignore in the Git repository.

## Build and Run

To build the project, navigate to the project directory and run:

```
make
```

To run the program, execute:

```
./cubic_solver
```

## Usage

Follow the prompts to enter the coefficients of the cubic equation. The program will output the roots in the specified format.

## Contributing

Feel free to submit issues or pull requests for improvements.

## License

This project is licensed under the MIT License.

### Commands to Upload to GitHub

1. Initialize a new Git repository:
   ```
   git init
   ```

2. Add all files to the repository:
   ```
   git add .
   ```

3. Commit the changes:
   ```
   git commit -m "Initial commit"
   ```

4. Create a new repository on GitHub (do this on the GitHub website).

5. Link the local repository to the GitHub repository:
   ```
   git remote add origin https://github.com/yourusername/cubic-equation-solver.git
   ```

6. Push the changes to GitHub:
   ```
   git push -u origin master
   ```