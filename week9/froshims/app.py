from flask import Flask, render_template, request           # import flask functions and libraries (the building blocks)

app = Flask(__name__)                                       # create an app instance


@app.route("/")                                             # @ is a decorator, at the end point /
def index():                                                # define a function called index
    return render_template("index.html")                    # render the template

@app.route("/register", methods=["POST"])
def register():
    name = request.form.get("name")
    dorm = request.form.get("dorm")
    if not name or not dorm:
        return render_template("failure.html")
    return render_template("success.html")