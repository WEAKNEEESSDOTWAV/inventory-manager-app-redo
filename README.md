# Projet_POO_GRP7

Change the connectionString in resource files -> App.config

Project -> add -> reference -> System::Configuration

https://www.codeproject.com/Articles/21036/Working-with-Configuration-Files-app-config-in-C-C

project properties -> configuration properties -> build events -> post build event and change the command line with:
copy app.config "$(TargetPath).config"