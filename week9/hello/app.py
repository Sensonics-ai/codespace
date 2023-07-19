from flask import Flask, render_template, request       # import flask functions and libraries (the building blocks)

app = Flask(__name__)                                   # create an app instance

@app.route("/")                                         # @ is a decorator, at the end point /
def index():
    if "name" in request.args:                          # if there is a name in the request args
        name = request.args["name"]                     # a variable called name with a value of the name in the request args
    else:                                               # if there is no name in the request args
          name = "World"                                # a variable called name with a value of "World"
    return render_template("index.html", name=name)     # render the template with the name variable

