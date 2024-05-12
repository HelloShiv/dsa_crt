from flask import Flask, request
import mysql.connector
# Initialize the Flask application
app = Flask(__name__)
# Connect to the MySQL database
try:
 conn = mysql.connector.connect(
 host="localhost",
 database="mydatabase",
 user="mydatabaseuser",
 password="mypassword"
 )
except mysql.connector.Error as err:
 print("Unable to connect to the database:", err)
# Create a cursor for executing database queries
cursor = conn.cursor()
# Define the route for displaying the user's profile
@app.route('/profile')
def profile():
 # Get the user ID from the query string
 user_id = request.args.get('user_id')
 # Check that the user ID is a number
 if not user_id.isdigit():
    return "Invalid user ID"
 # Use parameterized queries to execute the database query
 try:
    cursor.execute("SELECT * FROM users WHERE id=%s", (user_id,))
 except mysql.connector.Error as err:
    return "Unable to execute the database query:", err
 # Fetch the result of the database query
 result = cursor.fetchone()
 # Check if the result is None, which means that no user was found with the given ID
 if result is None:
    return "User not found"
 # Return the result as a string
 return str(result)
# Start the Flask application
if __name__ == '__main__':
    app.run()