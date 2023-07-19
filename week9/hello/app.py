from flask import Flask, render_template, request       # import flask functions and libraries (the building blocks)

app = Flask(__name__)                                   # create an app instance

@app.route("/")                                         # @ is a decorator, at the end point /
def index():
    if "name" in request.args:
        name = request.args["name"]
    else:
          name = "World"
    return render_template("index.html")

