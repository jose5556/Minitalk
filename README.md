<h1 align="center">
	📡 minitalk
</h1>
<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/jose5556/minitalk?color=lightblue" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/jose5556/minitalk?color=yellow" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/jose5556/minitalk?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/jose5556/minitalk?color=green" />
</p>

## 💡 About the project

Minitalk is a project completed during my studies at School 42. The objective of this project is to create a simple communication program using UNIX signals. 
The program consists of a server and a client, where the client sends a message of any size to the server extremely fast, which then displays it.

## 🔍 Overview

The project involves the implementation of a server and a client using signal handling. 
The server waits for messages from the client, which are sent one character at a time using SIGUSR1 and SIGUSR2 signals. 
The server then reconstructs the message and prints it to the standard output.

For more detailed information about the implementation, please refer to the project files and documentation.

## 🛠️ Usage

### Requirements

The function is written in C language and therefore requires the **`cc`** compiler to be executed.

**1. Compiling the library**

To compile the server and client programs, run the following command in the project directory:

```shell
$ make
```

**2. Running the server**

First, start the server. It will display its process ID (PID), which is required for the client to send messages.

```shell
$ ./server
```

**3. Sending a message with the client**

Use the client program to send a message to the server. You need to provide the server's PID and the message you want to send.

```shell
$ ./client [server PID] "Your message here"
```

Example

Open one terminal window and start the server:


```shell
$ ./server
Server PID: 12345
```

Open another terminal window and send a message from the client:

```shell
$ ./client 12345 "Hello, world!"
```
Then, the server terminal should display:

```shell
Hello, world!
```

Feel free to explore the minitalk.h header file for documentation on the implemented functions and signal handling utilities.
