## DBKI Multiplex – Movie Ticket Booking System

A simple C++ console-based movie ticket booking system where users can:

Select a movie

Choose a showtime

Book seats

Pick multiple snacks

View a final bill summary

This project is perfect for beginners learning C++ basics, arrays, structs, and user input handling.

## Features
 1. Movie Selection

User can choose from 3 available movies.

2. Showtime Selection

Each movie has 3 available timings (e.g. 6 PM, 8 PM, 11 PM).

3. Seat Booking

Total available seats: 40

Ticket price per seat: ₹170

User selects number of seats

Total price is calculated automatically

 4. Snacks Menu (Optional)

User can select one or multiple snacks:

Popcorn (₹100)

ThumsUp (₹100)

Water Bottle (₹20)

Caramel Popcorn (₹155)

Samosa (₹100)

 5. Final Receipt

Displays:

Movie name

Timing

Seats booked

Total ticket cost

Remaining seats

Snacks selected


## How to Run

Copy the code into a file:

movie_booking.cpp


Compile using any C++ compiler:

g++ movie_booking.cpp -o movie


Run the program:

./movie

##Sample Output

------------Welcome to DBKI Multiplex--------------

Today's shows
1. Barbie
2. Jawan
3. OM Shanti OM
Please select the movie: 2

Available showtime
1.6:00PM
2.8:00PM
3.11:00PM
Please select the movie timing: 1

Total available seat=40
Price for one seat is ₹170
Please enter the total seat: 3
Would you like to see some option for the snack(y/n): y


##Author

Kanishka Jain