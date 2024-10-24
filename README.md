BuyAndSell Stock Trading Application
# Project Overview
The BuyAndSell Stock Trading Application is a simple C++ program that helps users determine the best days to buy and sell stocks to maximize profit. 
The application processes a list of stock prices over multiple days and suggests optimal buy and sell days.

# Features
Input: Stock prices for n days.
Output: The best day to buy and the best day to sell to maximize profit.
Built using C++.

# Folder Structure
BuyAndSell/
│
├── main.cpp                  # Main file containing the execution logic
├── StockProfitCalculator.cpp  # Logic to calculate optimal buy/sell days
├── StockProfitCalculator.h    # Header file for StockProfitCalculator
├── stockTrader.exe            # Compiled executable (generated after build)
├── README.md                  # This readme file
└── .vscode/
    └── tasks.json             # Build configuration for Visual Studio Code

# Prerequisites
Before running this project, you need the following:
g++ compiler: Make sure you have the MinGW g++ compiler installed. Download MinGW
Visual Studio Code: Download and install VS Code

How to Set Up the Project Locally
# Step 1: Clone the Repository
You can clone the repository from GitHub to your local machine using the following command:
git clone https://github.com/victorabhishiek/BuyAndSell.git
cd BuyAndSell

# Step 2: Open in Visual Studio Code
Open the cloned folder in VS Code:
Open Visual Studio Code.
Select File > Open Folder.
Navigate to the BuyAndSell folder and open it.
# Step 3: Configure the Build Task (if needed)
Ensure the .vscode/tasks.json file is present to automate the build process. The tasks.json file should look like this:
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "Build C++ file",
            "type": "shell",
            "command": "g++",
            "args": [
                "-g",
                "${workspaceFolder}/main.cpp", 
                "${workspaceFolder}/StockProfitCalculator.cpp", 
                "-o",
                "${workspaceFolder}/stockTrader.exe"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "problemMatcher": ["$gcc"]
        }  
    ]
}

# Step 4: Build the Project
Open the VS Code terminal (Ctrl + ``).
Run the build task:
Press Ctrl + Shift + B to build the project.
If the build succeeds, it will generate stockTrader.exe in the project folder.

How to Run the Code
# Step 1: Run the Executable
Once the project is built successfully, follow these steps to run the program:
1. Open the terminal in VS Code or Command Prompt.
2. Navigate to the project folder:
cd path\to\your\project\BuyAndSell
3. Run the executable:
./stockTrader.exe

# Step 2: Provide Input
When the program starts, it will prompt you to enter the number of days and the stock prices for those days. Example:
Enter number of days: 5
Enter stock prices: 100 180 260 310 40

# Step 3: View Output
The program will output the best days to buy and sell to maximize your profit. Example:
Best day to buy: Day 1
Best day to sell: Day 4
Maximum profit: 210

# Additional Information
If you encounter any issues while building or running the program, please check that your system has the required g++ 
compiler and that all source files (main.cpp, StockProfitCalculator.cpp, and StockProfitCalculator.h) are in the project directory.

# Future Enhancements
Add a graphical user interface (GUI) to enhance user experience.
Implement additional features like multiple stock options and advanced trading algorithms.













