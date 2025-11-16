Password Checker (C++)
======================

A minimal C++ console utility that evaluates password strength against common best‑practice criteria.

Description
-----------
The program reads a password from standard input and classifies it as “Strong” or “Weak” based on:
- Minimum length of 8 characters
- At least one uppercase letter
- At least one lowercase letter
- At least one digit
- At least one non‑alphanumeric symbol
- No whitespace characters

Getting Started
---------------
1) Build

```bash
g++ -std=c++17 -O2 -o password_checker main.cpp
```

2) Run

```bash
./password_checker
```

Example
-------
Input:
```
Enter password: MyP@ssw0rd!
```
Output:
```
Strong password
```

Notes
-----
- The strength rules are simple by design and can be adjusted in `main.cpp` as needed.
- For production use, consider adding checks for common passwords, entropy estimation, and breached‑password lookups.

License
-------
This project is released under the MIT License. See `LICENSE` for details.

Author
------
`jahidbappi` (<jahidcric2000@gmail.com>)


