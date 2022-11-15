# get_next_line 📖

This project was

<img width="145" alt="199267802-024e3444-7c80-45b0-a6d9-ddb0c1191a19" src="https://user-images.githubusercontent.com/118260014/201896191-65272ed7-0f22-4cdc-baa4-c22bac802ade.png">

<img width="145" alt="199267820-ba154df2-a63a-4f7f-940e-0125d4c6c5b1" src="https://user-images.githubusercontent.com/118260014/201896199-e3040ef5-1579-4d23-96fa-c503e21b35f9.png">

The aim of this projct is creating a function called get_next_line() in which when it's called in a loop, it'll read the text within the file descriptor one line at a time until the end of the file.

- About get_next_line()

The function works both when reading a file and when reading from the standard input.
The project return value is the line that was read. However, If there is nothing else to read or if an error occurred, it returns NULL.
The returned line includes the terminating \n character except if the end of file was reached and does not end with a \n character.
Step for compiling the project:

- cd get_next_line

<img width="570" alt="199276474-e516193d-fdbf-47c8-98ee-82a35bd5919d" src="https://user-images.githubusercontent.com/118260014/201896571-79f6d145-ebfb-4d77-9785-8a0c4e4658c2.png">

- touch 42.txt (txt file should be created so the project finds the file to read from)

<img width="611" alt="199273268-8f7a970f-676a-4a34-aafe-9ba29a25012a" src="https://user-images.githubusercontent.com/118260014/201896687-bd0bdbc1-19f9-41a5-b157-37e2a6b5c6b3.png">

- cc -Wall -Werror -Wextra -D BUFFER_SIZE=n <file.c>
compiler call: -D BUFFER_SIZE=n will define the buffer size for read().

<img width="613" alt="199269111-7b0990a6-9e68-4ff2-9fec-d77a687bdfa0" src="https://user-images.githubusercontent.com/118260014/201896832-4ba47869-8519-4f0e-bfa7-18994024236e.png">


- ./a.out

<img width="613" alt="199269247-0f04f099-f46f-4485-a688-caa2353590dd" src="https://user-images.githubusercontent.com/118260014/201896868-009a3575-a3d4-4395-8c01-0f93369c125f.png">

## The purpose of this project ✍🏼

Learning deeply about open(), read(), close(), static variables and file descriptors.

## Challenges 👩🏻‍💻

In This project learning the about the buffer and finding the solution to make my function read any amount of text corecttly without messing any letter or integer or special character from a file descriptor or from the standard output. Learning about the functions open(), read() and close() contributed in finding the right path to find the best solution.

## Project grade

<img width="202" alt="199270737-cb3ade05-cb0d-4da2-b980-cc59a6f878dc" src="https://user-images.githubusercontent.com/118260014/201897134-28e4f351-aff7-49da-8a18-6ab0133c22ec.png">

I hope that this project will benefit you by gaining sufficient information.

Dont hesitate to contact me if you need any help ^-^ : alal-ali@student.42abudhabi.ae
