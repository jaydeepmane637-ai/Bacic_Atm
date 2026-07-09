# ATM Simulation in C

A simple console-based ATM simulation built as my first C project. It supports PIN authentication, balance inquiry, deposits, and withdrawals with basic validation.

## Features

- PIN-based login (max 3 attempts before account termination)
- Check balance
- Deposit money (with an upper limit check)
- Withdraw money (with insufficient balance / minimum withdrawal check)
- Simple menu-driven interface using `switch-case`

## How to Compile and Run

```bash
gcc atm_simulation.c -o atm
./atm
```

On Windows (using GCC/MinGW):

```bash
gcc atm_simulation.c -o atm.exe
atm.exe
```

## Sample Flow

```
Enter PIN: 1234

====Login Successful====

=======================
        MENU
=======================
1.Check balance
2.Deposit Money
3. Withdraw Money
4. exit
Enter the option :1
Your balance is 1000
```

## Default Credentials (for testing)

- PIN: `1234`
- Starting balance: `1000`

## Notes / Known Limitations

- PIN and balance are hardcoded (not stored persistently).
- Deposit limit: ₹200000 per transaction.
- Minimum withdrawal amount: ₹400.
- This is a learning project built while studying C fundamentals — feedback and suggestions are welcome!

## What I Learned

- Working with `while` and `do-while` loops
- `switch-case` for menu-driven programs
- Basic input validation
- Structuring a small interactive C program

## License

Free to use for learning purposes.
