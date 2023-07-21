from flask import Flask, render_template, request           # import flask functions and libraries (the building blocks)

app = Flask(__name__)                                       # create an app instance


@app.route("/")                                             # @ is a decorator, at the end point /
def index():                                                # define a function called index
    return render_template("index.html")                    # render the template

