from flask import Flask, render_template, request

app = Flask(__name__)

REGISTRANTS = {}

@app.route("/")                                                             # route to /
def index():                                                                # index() is a function
    return render_template("index.html")                                    # render index.html

@app.route("/register", methods=["POST"])                                   # route to /register
def register_user():                                                        # register_user() is a function
    name = request.form.get("name")                                         # get the name and sport from the form
    sport = request.form.get("sport")                                       # get the name and sport from the form
    REGISTRANTS[name] = sport                                               # add name and sport to dictionary
    return render_template("success.html")                                  # render success.html

@app.route("/registrants")                                                  # route to /registrants
def show_registrants():                                                     # show_registrants() is a function
    return render_template("registrants.html", registrants=REGISTRANTS)     # pass in the dictionary
