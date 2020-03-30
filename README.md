# Kagami

Watch movies, TV shows and listen to music with your friends remotely.

## What’s Kagami?

In a nutshell, as COVID-19 forced us all to stay indoors, my friends and I wanted a way to watch movies together. Of course, everyone is going crazy over Netflix Party (and a few others out there) but NP is only available for Netflix, and all the other tools out there just don’t seem to work consistently or at all in most cases. So I decided to make my own remote movie night experience.

## What’s the Name Mean?

Kagami is Japanese for mirror. The software mirrors not only video sources, but your desktop as well (I’m tired of the crappy screen sharing options out there as well). Kagami also mirrors the remote control to all participants in a group, so the concept of a mirror stuck in my mind.

## Prepare Your Machine

Kagami is written in C++ and uses Qt5. You will need to first install Qt5.

For macOS, grab the installer from https://www.qt.io/download-open-source

For Ubuntu, run these commands:

```shell
sudo apt update
sudo apt install -y build-essential qt5-default qtcreator
```

## Build Steps

Fork and clone this repo:

```shell
git clone git@github.com:mattmoore/kagami.git
```

From within the project folder, run:

```shell
qmake
make
```

If you're on macOS, a `kagami.app` launcher is automatically generated for you. You can double-click this to run Kagami.

If you're on Linux, just execute the binary from the terminal (future support for launchers coming soon):

```shell
./kagami
```

## Project Status

Kagami will run on macOS, Linux and Windows. In the near future, it will be supported on iOS and Android as well.

Installation packages will be available just as soon as I have the initial version complete.

### Planned Features

- Play videos.
- Stream videos with friends!
- Remote control everyone's player. Think Netflix Party, but not limited to Netflix!

## Contribute!

This project is open-source and contributions are more than welcome! Feel free to open a pull request on GitHub! You can also reach out to me at matt@mattmoore.io if you have any questions or want to know how to get started.
