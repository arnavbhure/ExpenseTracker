📝 Expense Tracker in C++


A console-based Expense Tracker in C++ to manage personal expenses efficiently. Record, view, calculate, and delete your expenses easily.

🚀 Features

Add Expense – Enter date, category, amount, and notes.

Display Expenses – View all your recorded expenses.

Total Expense – Automatically calculate total spending.

Delete All Expenses – Clear all records safely.

💾 File Handling

Expenses are stored in expenses.txt.

Format:

Date|Category|Amount|ExtraNote


| separator ensures notes with spaces are handled properly.

Uses ifstream and ofstream for reading/writing data.

🎯 Usage

Compile the program:

g++ expense_tracker.cpp -o expense_tracker


Run the program:

./expense_tracker   # Linux/Mac
expense_tracker.exe # Windows


Use the menu to Add, Display, Total, Delete, or Exit.

📸 Demo
Welcome to the Expense Calculator
------------------------------------------
1. Add Expense
2. Display All Expenses
3. Show Total Expense
4. Delete All Expenses
5. Exit
Enter your choice:

🛠 Author

Arnav Bhure – Console-based C++ project demonstrating file handling, structs, and basic data management.
