# Unit Converter
## Overview
The Unit Converter is a simple C program designed to convert between different units of temperature, currency, and mass. Users can select the type of conversion they want to perform and input the values they need to convert. The program ensures valid inputs and provides accurate conversions.

## Features
Temperature Conversion
Celsius to Fahrenheit
Fahrenheit to Celsius
Currency Conversion
Euros to USD
Euros to GBP
Euros to CNY
Mass Conversion
Kilograms to Pounds
Grams to Ounces

## Usage
### 1.Compile the Program
Use a C compiler to compile the source code. For example, with gcc:
```sh
gcc -o unit_converter unit_converter.c
```
### 2.Run the Program
Execute the compiled program:
```sh
./unit_converter
```
### 3.Follow the On-Screen Instructions
The program will prompt you to choose the type of conversion: Temperature, Currency, or Mass.
Based on your choice, it will provide further options for specific conversions.
Enter the required values and the program will display the converted result.
**Example**
Main menu:
```sh
Welcome to unit converter!

Choose only one Character:
'T' for Temperature.
'C' for Currency.
'M' for Mass.
```
Input:
```sh
-Your choice: T
```
Options:
```sh
Choose:
'1' to convert from Celsius to Fahrenheit.
'2' to convert from Fahrenheit to Celsius.
```
Input:
```sh
-Your choice: 1
```
Input:
```sh
Give temperature in Celsius: 25
```
Output:
```sh
25.000 in Celsius = 77.000 in Fahrenheit!
End of converting!!!
```

**NOTE:** This project is developed as part of a university assignment at Harokopio University of Athens.
