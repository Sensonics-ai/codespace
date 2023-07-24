from flask import Flask, render_template, request

app = Flask(__name__)

REGISTRANTS = {}

SPORTS = ["Soccer", "Tennis", "Swimming", "Basketball", "Baseball", "Softball", "Football", "Volleyball", "Hockey"]

@app.route("/")                                                             # route to /
def index():                                                                # index() is a function
    return render_template("index.html", sports=SPORTS)                                    # render index.html

@app.route("/register", methods=["POST"])                                   # route to /register
def register_user():                                                        # register_user() is a function
    name = request.form.get("name")                                         # get the name and sport from the form
    sport = request.form.get("sport")                                        # get the name and sport from the form
    if sport not in SPORTS:                                                 # if sport is not in SPORTS
        return render_template("failure.html")                               # render failure.html
    REGISTRANTS[name] = sport                                               # add name and sport to dictionary
    return render_template("success.html")                                  # render success.html

@app.route("/registrants")                                                  # route to /registrants
def show_registrants():                                                     # show_registrants() is a function
    return render_template("registrants.html", registrants=REGISTRANTS)     # pass in the dictionary
