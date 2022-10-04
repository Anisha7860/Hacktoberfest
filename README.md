#<h1 align="center"> 🎉 Hacktoberfest_2022 🎉

  ![Hactoberfest](https://img.shields.io/badge/Hactoberfest-%E2%9D%A4-red)    
![Maintenance](https://img.shields.io/badge/Maintained%3F-yes-orange.svg)
![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg?style=flat-square) 
![Open Source Love](https://img.shields.io/badge/Open%20Source-%E2%9D%A4-red)
![contributions welcome](https://img.shields.io/badge/contributions-welcome-brightgreen.svg?style=flat)
![Begginers Friendly](https://img.shields.io/badge/Begginer%20Friendly%20-Yes-orange)
[![GitHub issues](https://img.shields.io/github/issues/Anisha7860/Hacktoberfest_2022)](https://github.com/Anisha7860/Hacktoberfest_2022/issues)
[![GitHub forks](https://img.shields.io/github/forks/Anisha7860/Hacktoberfest_2022)](https://github.com/Anisha7860/Hacktoberfest_2022/network)
[![GitHub stars](https://img.shields.io/github/stars/Anisha7860/Hacktoberfest_2022)](https://github.com/Anisha7860/Hacktoberfest_2022/stargazers)

<p align="center"><img src="https://res.cloudinary.com/practicaldev/image/fetch/s--ds97LCK---/c_imagga_scale,f_auto,fl_progressive,h_420,q_auto,w_1000/https://dev-to-uploads.s3.amazonaws.com/uploads/articles/ymlmr15l83rrjq8natft.jpg"/></p>

# What is Hacktoberfest?
Hacktoberfest is a month-long celebration of open source software run by DigitalOcean in partnership with GitHub and Twilio. Hacktoberfest is open to everyone in our global community!

# How to participate?
You just need to make four contributions to open source before October 31 and can receive a free Hacktoberfest t-shirt.


# First Contributions

This project aims to simplify and guide the way beginners make their first contribution. If you are looking to make your first contribution, follow the steps below.


#### If you don't have git on your machine, [install it](https://help.github.com/articles/set-up-git/).

## Fork this repository

Fork this repository by clicking on the fork button on the top of this page.
This will create a copy of this repository in your account.

## Clone the repository

Now clone the forked repository to your machine. Go to your GitHub account, open the forked repository, click on the code button and then click the _copy to clipboard_ icon.

Open a terminal and run the following git command:

```
git clone "url you just copied"
```

where "url you just copied" (without the quotation marks) is the url to this repository (your fork of this project). See the previous steps to obtain the url.

For example:

```
git clone https://github.com/<your-username>/Hacktoberfest_2022.git
```

where `this-is-you` is your GitHub username. Here you're copying the contents of the first-contributions repository on GitHub to your computer.

## Create a branch

Change to the repository directory on your computer (if you are not already there):

```
cd Hacktoberfest_2022
```

Now create a branch using the `git checkout` command:

```
git checkout -b <your-new-branch-name>
```

For example:

```
git checkout -b add-alonzo-church
  
```

Add a reference(remote) to the original repository.

```
 git remote add upstream https://github.com/Anisha7860/Hacktoberfest_2022.git
```

Check the remotes for this repository.

```
git remote -v
```

Always take a pull from the upstream repository to your master branch to keep it at par with the main project(updated repository).

```
git pull upstream main
```


 Perfom your desired changes to the code base.
> 1. create a folder and add all code in that folder only.
> 2. create a demo folder inside "Your Project" and add a gif of your project named demo.gif (OPtional)
## Make necessary changes and commit those changes

Now open `Contributers.md` file in a text editor, add your name to it. Don't add it at the beginning or end of the file. Put it anywhere in between. Now, save the file.

If you go to the project directory and execute the command `git status`, you'll see there are changes.

Add those changes to the branch you just created using the `git add` command:

```
git add Contributers.md
```

Now commit those changes using the `git commit` command:

```
git commit -m "Add <your-name> to Contributers list"
```

replacing `<your-name>` with your name.

NOTE : In case terminal shows `Author identity unknown`, use 
```
git config user.email "your email" (including quotation marks)
git config user.name "your name" (including quotation marks)
```

## Push changes to GitHub

Push your changes using the command `git push`:

```
git push origin -u <add-your-branch-name>
```

replacing `<add-your-branch-name>` with the name of the branch you created earlier.

## Submit your changes for review

If you go to your repository on GitHub, you'll see a `Compare & pull request` button. Click on that button.

Add appropriate title and description to your pull request explaining your changes and efforts done.

Click on `Create Pull Request`.


Woohoo! You have made a PR to the Hacktoberfest_2022
 :boom: . Wait for your submission to be accepted and your PR to be merged.

**Thank you for your interest in contributing to our Repo!🏼**



Soon I'll be merging all your changes into the master branch of this project. You will get a notification email once the changes have been merged.

## Where to go from here?

Congrats! You just completed the standard _fork -> clone -> edit -> pull request_ workflow that you'll encounter often as a contributor!

**Kudos to you🎈**

**Best of luck 👍😊**

Celebrate your contribution and share it with your friends and followers.
