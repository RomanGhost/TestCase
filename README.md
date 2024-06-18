# Simple Web Application for User Privilege Check
## Description

This project is a simple web application designed to check the privilege level (Administrator/User/Guest) of a given user on a Windows operating system. The application is built using Node.js with a C++ addon leveraging WinAPI for privilege checks.

## Features

1. Launches a web server from the project root.
2. Automatically opens a web page with an input field for the username and a "Check" button.
3. Displays the privilege level of the entered username or a message indicating that the user does not exist.
4. Provides a "Back" button to return to the initial page.

## Prerequisites

- Node.js installed on your system
- A C++ compiler compatible with Node.js addons
- Windows operating system (for WinAPI usage)

## Installation

1. Clone the repository from GitHub:
    ```sh
    git clone https://github.com/yourusername/yourrepository.git
    ```
2. Navigate to the project directory:
    ```sh
    cd yourrepository
    ```
3. Install the necessary Node.js packages:
    ```sh
    npm install
    ```
4. Build the C++ addon:
    ```sh
    npm run build
    ```

## Usage

1. Start the web server:
    ```sh
    start.bat
    ```
2. The default web browser will automatically open with the initial web page.

## Instructions

1. Enter the username you want to check in the input field.
2. Click the "Check" button.
3. The application will display a message indicating the privilege level of the user or state that the user does not exist.
4. Use the "Back" button to return to the initial page and check another user.

## WinAPI Privilege Check

The privilege check is performed using WinAPI to ensure accurate retrieval of user privilege levels.

## Testing

To verify the list of users and their privileges, you can access:
- Computer Management -> System Tools -> Local Users and Groups -> Users

## Repository Structure

- `start.bat` - Script to start the web server
- `index.js` - Main server code
- `addon/` - Directory containing the C++ addon source code
- `public/` - Directory containing HTML and client-side JavaScript files
- `README.md` - This readme file

## Time Spent
6 Hours
