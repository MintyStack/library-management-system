# Library Management System (C Project)

## 📌 Overview
This is a simple **Library Management System** written in C.  
It allows users to:
- Add books
- Display all books
- Search book by ID
- Delete book by ID

The project uses **structs** and **functions** for modular code.

---

## ⚙️ Features
- Store up to 100 books
- Menu-driven program
- Uses arrays and string handling

---

## 🛠️ Installation & Run
### Compile:
```bash
gcc main.c library.c -o library_mgmt

Run:
./library_mgmt

📂 Project Structure
Library-Management-System/
│── library.c        # Function implementations
│── library.h        # Header file
│── main.c           # Main program with menu
│── README.md        # Project documentation

📸 Sample Output
--- Library Management System ---
1. Add Book
2. Display Books
3. Search Book
4. Delete Book
5. Exit
Enter choice: 1
Enter Book ID: 1
Enter Title: C Programming
Enter Author: Dennis Ritchie
Enter Year: 1978
Book added successfully!

📌 Future Improvements

Save book data in a file

Add option to issue/return books

Add sorting by year or author
