#implements a registration form for the sportsql app

from cs50 import SQL
from flask import Flask, flash, redirect, render_template, request, session

app = Flask(__name__)

db = SQL("sqlite:///froshims.db")

SPORTS = [
    "Basketball",
    "Soccer",
    "Hockey",
]

app.route("/")
def index():
    return render_template("index.html", sports=SPORTS)

@app.route("/register", methods=["POST"])
def register():
    # check for proper submission
    name = request.form.get("name")
    sport = request.form.get("sport")
    if not name or sport not in SPORTS:
        return render_template("failure.html")

    # remember the registrant
    db.execute("INSERT INTO registrants (name, sport) VALUES(:name, :sport)", name=name, sport=sport)

    # confirm registration
    return render_template("success.html", sport=sport)


@app.route("/registrants")                                                                      #route to registrants page
def registrants():                                                                              #define registrants function
    registrants = db.execute("SELECT * FROM registrants")                                       #select all from registrants table
    return render_template("registrants.html", registrants=registrants)                         #render registrants page with registrants table

