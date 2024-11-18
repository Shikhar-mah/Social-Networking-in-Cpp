# Social Network in C++

A simple social network application built using C++ to demonstrate basic functionalities like user registration, login, adding/removing friends, posting updates, and viewing posts. This project uses header files to modularize functionality for better code organization and readability.

## Project Overview

This C++ social network allows users to register, log in, and interact with each other through posts and friend requests. The program includes different features like viewing posts, adding friends, responding to posts, and managing user profiles.

## Features

- **Registration**: Users can register with a username and password.
- **Login**: Registered users can log in using their username and password.
- **Add/Remove Friends**: Users can send and accept friend requests, and also remove friends.
- **View Posts**: Users can view posts made by their friends.
- **Post Updates**: Users can make posts on their profile.
- **Manage Profile**: Basic profile management functionalities like displaying user details.

## Project Structure

- **Main File** (`main.cpp`): This is the entry point of the application. It handles the main menu, processes user input, and calls the necessary functions from the header files.
  
- **Header Files**: The project consists of multiple header files, each containing specific functionality:
    - `listusers.h`: Lists all the registered users.
    - `mainmenu.h`: Displays the main menu for the application.
    - `deletefriends.h`: Allows users to remove friends.
    - `exxit.h`: Handles program exit operations.
    - `friendrequest.h`: Handles sending and receiving friend requests.
    - `friends.h`: Manages the friend list of the user.
    - `goback.h`: Allows users to navigate back to previous menus.
    - `login.h`: Handles user login functionality.
    - `menu2.h`: Displays a secondary menu for additional options.
    - `menu3.h`: Displays another set of options for users after login.
    - `registration.h`: Manages the user registration process.
    - `viewfriendposts.h`: Displays posts made by friends.
    - `viewposts.h`: Displays posts made by the logged-in user.

## Compilation Instructions

To compile and run the program:

1. Ensure you have a C++ compiler installed (e.g., GCC or Clang).
2. Create a folder and place all the `.cpp` and `.h` files in it.
3. Open a terminal and navigate to the project folder.
4. Use the following command to compile:

    ```bash
    g++ -o social_network main.cpp
    ```

5. Once compiled, run the program:

    ```bash
    ./social_network
    ```

## How to Use

1. **Register**: When the program starts, you'll be prompted to register a new account by providing a username and password.
2. **Login**: Once registered, you can log in with your credentials.
3. **Main Menu**: After logging in, you will see the main menu, which includes options like:
    - View posts.
    - Send friend requests.
    - View friend posts.
    - Log out.
4. **Friends**: You can add friends by sending friend requests, and also view posts made by your friends.

## Code Walkthrough

### Main Function (`main.cpp`)

The `main()` function is responsible for displaying the application header, showing the number of registered users, and presenting the main menu to the user. It utilizes various functions from the header files to process actions such as listing users, handling menus, and logging in.

### Header Files

- **`listusers.h`**: This file contains a function to list all registered users and display them.
- **`mainmenu.h`**: This file displays the main menu where users can select options.
- **`deletefriends.h`**: A file for deleting friends from the friend list.
- **`friendrequest.h`**: Handles sending and receiving friend requests.
- **`friends.h`**: Contains functions for managing a user's friends list.
- **`goback.h`**: Provides functionality to navigate back to the previous menu.
- **`login.h`**: Handles user login functionality.
- **`menu2.h`**: Displays a secondary menu for additional user options after login.
- **`menu3.h`**: Shows more options like viewing your posts, logging out, etc.
- **`registration.h`**: Manages the registration of new users.
- **`viewfriendposts.h`**: Displays posts made by your friends.
- **`viewposts.h`**: Displays the posts made by the logged-in user.

## Example

Here’s an example flow of how the program works:

1. **Registration**:  
   ```
   Enter your username: Alice  
   Enter your password: password123
   ```
   
2. **Login**:  
   ```
   Enter your username: Alice  
   Enter your password: password123
   ```

3. **Main Menu**:  
   ```
   Main Menu:
   1. View Posts
   2. Send Friend Request
   3. View Friend Posts
   4. Logout
   Enter your choice: 1
   ```

4. **Post Viewing**:  
   Displays the list of posts made by the user.

## Contributing

Feel free to fork this repository and make contributions. Any improvements to the code, documentation, or bug fixes are welcome!

## License

This project is open-source and available under the MIT License.
