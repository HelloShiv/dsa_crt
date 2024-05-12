from flask import Flask, request
app = Flask(__name__)
@app. route ("/")
def index ():
 name = request.args.get ("name", "")
 return f"""
 <html>
 <head>
 <title>XSS Example</title>
 </head>
 <body>
 <h1>Hello, {escape_html(name)}! </h1>
 <form action="/" method="GET">
 <label for="name">Enter your name:</label>
 <input type="text" id="name" name="name"
value="{escape_html(name)}">
 <input type="submit" value="Submit">
 </form>
 </body>
 </html>
 """
def escape_html(s):

 return s. replace ("&", "&amp;"). replace ("<", "&lt;"). replace (">", "&gt;").replace ('"', "&quot;"). replace ("'", "&#39;")
if __name__ == "__main__":
 app.run ()