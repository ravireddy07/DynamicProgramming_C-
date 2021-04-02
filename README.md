# Competative Programming Problems

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
[![GitHub issues](https://img.shields.io/github/issues/ravireddy07/cpp-book.svg)](https://github.com/ravireddy07/cpp-book/issues)&nbsp;&nbsp;&nbsp;
[![GitHub pull requests](https://img.shields.io/github/issues-pr/ravireddy07/cpp-book.svg)](https://github.com/ravireddy07/cpp-book/pulls)&nbsp;&nbsp;&nbsp;
[![GitHub forks](https://img.shields.io/github/forks/ravireddy07/cpp-book.svg?style=social&label=Fork)](https://github.com/ravireddy07/cpp-book/network)&nbsp;&nbsp;&nbsp;
[![GitHub stars](https://img.shields.io/github/stars/ravireddy07/cpp-book.svg?style=social&label=Stars)](https://github.com/ravireddy07/cpp-book/stargazers)&nbsp;&nbsp;&nbsp;
[![GitHub watchers](https://img.shields.io/github/watchers/ravireddy07/cpp-book.svg?style=social&label=Watch)](https://github.com/ravireddy07/cpp-book/watchers)&nbsp;&nbsp;&nbsp;

Problem Solutions from Different Platforms.
<br/>

## Contest Problems

Contest Solutions will be added after the contest.
</br>

**Codeforces:** After Contest.</br>
**Codechef:** After Contest.
</br>

# Contributing

If you find or knows or experienced any challenging problem that others should give it a try, then Please a create a issue by providing the problem statement or a link/source for that problem. It would be really appreciated.

## How to Contribute
## Steps to follow :scroll:

### 1. Fork it :fork_and_knife:

You can get your own fork/copy of [cpp-book](https://github.com/ravireddy07/cpp-book) by using the <kbd><b>Fork</b></kbd></a> button on right corner.

 [![Fork Button](https://help.github.com/assets/images/help/repository/fork_button.jpg)](https://github.com/ravireddy07/cpp-book)

### 2. Clone it :busts_in_silhouette:

You need to clone (download) it to local machine using

```sh
$ git clone https://github.com/Your_Username/cpp-book.git
```

> This makes a local copy of repository in your machine.

Once you have cloned the `cpp-book` repository in Github, move to that folder first using change directory command on linux and Mac.

```sh
# This will change directory to a folder cpp-book
$ cd cpp-book
```

Move to this folder for all other commands.

### 3. Set it up :arrow_up:

Run the following commands to see that *your local copy* has a reference to *your forked remote repository* in Github :octocat:

```sh
$ git remote -v
origin  https://github.com/Your_Username/cpp-book.git (fetch)
origin  https://github.com/Your_Username/cpp-book.git (push)
```

Now, lets add a reference to the original [cpp-book](https://github.com/ravireddy07/cpp-book) repository using

```sh
$ git remote add upstream https://github.com/ravireddy07/cpp-book.git
```

> This adds a new remote named ***upstream***.

See the changes using

```sh
$ git remote -v
origin    https://github.com/Your_Username/cpp-book.git (fetch)
origin    https://github.com/Your_Username/cpp-book.git (push)
upstream  https://github.com/ravireddy07/cpp-book.git (fetch)
upstream  https://github.com/ravireddy07/cpp-book.git (push)
```

### 4. Sync it :recycle:

Always keep your local copy of repository updated with the original repository.
Before making any changes and/or in an appropriate interval, run the following commands *carefully* to update your local repository.

```sh
# Fetch all remote repositories and delete any deleted remote branches
$ git fetch --all --prune

# Switch to `main` branch
$ git checkout main

# Reset local `main` branch to match `upstream` repository's `main` branch
$ git reset --hard upstream/main

# Push changes to your forked `ravireddy07` repo
$ git push origin main
```

### 5. Ready Steady Go... :turtle: :rabbit2:

Once you have completed these steps, you are ready to start contributing by checking our `Help Wanted` Issues and creating [pull requests](https://github.com/ravireddy07/cpp-book/pulls).

### 6. Create a new branch :bangbang:

Whenever you are going to make contribution. Please create seperate branch using command and keep your `main` branch clean (i.e. synced with remote branch).

```sh
# It will create a new branch with name Branch_Name and switch to branch Folder_Name
$ git checkout -b Folder_Name
```

Create a seperate branch for contibution and try to use same name of branch as of folder.

To switch to desired branch

```sh
# To switch from one folder to other
$ git checkout Folder_Name
```

To add the changes to the branch. Use

```sh
# To add all files to branch Folder_Name
$ git add .
```

Type in a message relevant for the code reveiwer using

```sh
# This message get associated with all files you have changed
$ git commit -m 'relevant message'
```

Now, Push your awesome work to your remote repository using

```sh
# To push your work to your remote repository
$ git push -u origin Folder_Name
```

Finally, go to your repository in browser and click on `compare and pull requests`.
Then add a title and description to your pull request that explains your precious effort and make the pull request.

</br></br>
<p align="left"><img src="https://raw.githubusercontent.com/ravireddy07/cpp-book/master/resource/ESCR.gif"/></p>
