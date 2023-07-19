from flask import Flask, render_template, request       # import flask functions and libraries (the building blocks)

app = Flask(__name__)                                   # create an app instance

@app.route('/')                                         # @ is a decorator, at the end point /
def index():
    return render_template('index.html')                 # which function to call
    if "name" in request.args:
    else:
        return render_template('index.html')
    app.run(debug=True)                                 # run the server in debug mode
