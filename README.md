# Micro-blog

**Project Live Link**: https://not-blog.herokuapp.com/

<center> <h2>Motivation</h2> </center>

This web app provides Microsoft Wrod's style blogging with user profile, commentary, interactions, file uploading, content real-time translation, followers, notifications,E-mail support, full-text search and APIs

 <details align="center">
    <summary align="center"><strong>Tools and Technologies:</strong></summary>
     <table align="center">
         <tr align="center">
             <td  align = "center"><img src="https://i.ibb.co/rMD65VH/145-1450089-python-flask-icon.png" width=50px/><br>Flask</td>
             <td  align = "center"><img src="https://i.ibb.co/9rn37G0/853-8535155-sqlite-clipart-sqlite-icon.png" width=35px/><br>SQLite</td>
             <td  align = "center"><img src="https://i.ibb.co/kx5ZQG4/15215445.png" width=53px/><br>SQLAlchemy</td>
             <td  align = "center"><img src="https://i.ibb.co/pr1VWqn/images.png" width=53px/><br>Elasticsearch</td>
             <td  align = "center"><img src="https://i.ibb.co/WFX56GR/icons8-html-filetype-50.png" width=50px/><br>HTML</td>
             <td  align = "center"><img src="https://i.ibb.co/KbzNs5K/icons8-css-filetype-50.png" width=50px/><br>CSS</td>
           <td  align = "center"><img src="https://i.ibb.co/HNnBvJv/bootstrap-226077.png" width=50px/><br>Bootstrap</td>
         </tr>    
         <tr align="center">
           <td  align = "center"><img src="https://i.ibb.co/x6k2XfJ/icons8-javascript-50.png" width=50px/><br>JavaScript</td>
           <td  align = "center"><img src="https://i.ibb.co/DDxvVSN/icons8-jquery-50.png" width=50px/><br>JQuery</td>
           <td  align = "center"><img src="https://i.ibb.co/JjXnkDZ/6707cfe60d0ae430dea81b1a5cdd3402.png" width=50px/><br>AJAX</td>
           <td  align = "center"><img src="https://i.ibb.co/tXV3rQ9/1-h-MIq-EMz-V6ga93-WL9-HZEsyg.png" width=50px/><br>JSON</td>
           <td  align = "center"><img src="https://i.ibb.co/nMd5xCS/unnamed.png" width=50px/><br>Gmail SMTP</td>
           <td colspan="2"  align = "center"><img src="https://i.ibb.co/jWb0B32/kissclipart-globalization-clipart-globalization-clip-art-223695bbe0e46c36.png" width=55px/><br>i18n and l10n</td>
         </tr>
    </table>
</details>

 <details align="center">
    <summary align="center"><strong>Principles/Patterns</strong></summary>
    MVC, Blueprints, Mixins, Pagination, REST, Decorator, Single Responsibility, Open/Close and Dependency Inversion
</details>

<center> <h2>Details</h2> </center>

This project has been developed on Ubuntu Bionic Beaver OS and FireFox browser 70.0.1 (64-bit)

<center> <h2>Installation</h2> </center>

Clone the repository
```console
foo@bar:~$ git clone https://github.com/Abdulrahmannaser/Micro-blog.git
```
> <center> <h4>Environment</h4> </center>

To create dockerized (isolated) environment contains only dependencies of the project and prevents interaction with your home ecosystem do the following:
```console
foo@bar:~$ pip3 install virtualenvwrapper
foo@bar:~$ export WORKON_HOME=~/Envs
foo@bar:~$ mkdir -p $WORKON_HOME
foo@bar:~$ source ~/.local/bin/virtualenvwrapper.sh
foo@bar:~$ mkvirtualenv microblog
```
Then you will find your env has changed 
```console
(microblog) foo@bar:~$ 
```
Now we can install some software into the environment.
> <center> <h4>Dependencies</h4> </center>

You have to intall requirements.txt to install dependencies
```console
(microblog) foo@bar:~$ cd Micro-blog
(microblog) foo@bar:~/Micro-blog$ pip3 install -r requirements.txt
```
> <center> <h4>Mail support</h4> </center>

You will find mail config with a test mail that I published it's password to cut the road for testing the app without worrying about mail cofig

<center> <h2>Application Discovery</h2> </center>

The `flask` command is installed by Flask, not your application; it must be told where to find your application in order to use it. The FLASK_APP environment variable is used to specify how to load the application.
```console
(microblog) foo@bar:~/Micro-blog$ export FLASK_APP=app
(microblog) foo@bar:~/Micro-blog$ flask run
* Serving Flask app "app" (lazy loading)
 * Environment: development
 * Debug mode: on
 * Running on http://127.0.0.1:5000/ (Press CTRL+C to quit)
 * Restarting with stat
 * Debugger is active!
 * Debugger PIN: 208-528-382
```
Congrats! now you can access the app locally on the displayed url
http://127.0.0.1:5000/

<center> <h2>Contributing</h2> </center>

Pull requests are welcome. For major changes please open an issue first to discuss what you would like to change.

Before submitting your PR, consider running some code formatter on the lines you touched or added. This will help reduce the time spent on fixing small styling issues in code review. Good options are [yapf](https://github.com/google/yapf) or [autopep8](https://github.com/hhatto/autopep8) which likely can be integrated into your favorite editor.

Please refrain from formatting the whole file if you just change some small part of it. If you feel the need to tidy up some particularly egregious code, then do that in a separate PR.

<center><h2>License</h2></center>

[MIT License](https://github.com/Abdulrahmannaser/Micro-blog/blob/master/LICENSE)
