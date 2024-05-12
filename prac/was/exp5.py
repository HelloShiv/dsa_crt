import requests
# Define the target website URL
url = "https://www.example.com/"
# Send a GET request to the target website
response = requests.get(url)
# Check for SQL injection vulnerabilities
if "sql syntax" in response.text.lower():
 print("[!] SQL injection vulnerability detected on the target website!")
else:
 print("No SQL injection vulnerability detected.")

# Check for XSS vulnerabilities
if "<script>" in response.text.lower():
 print("[!] Cross-site scripting (XSS) vulnerability detected on thetarget website!")
else:
 print("No Cross-site scripting (XSS) vulnerability detected.")