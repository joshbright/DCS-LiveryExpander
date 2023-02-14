<h1 align="center"> DCS-LiveryExpander</h1>
<p align="center">Windows application for commenting out DCS Liveries' country variables.</p>

## How it works
1. The script recursively searches for a list of all description.lua files in the current directory's sub-folders
2. Once the list is obtained, it filters out any files that don't have a country variable, or have a country variable that is commented out.
3. With each of the resulting lua files, a backup is made called descriptionBackup.luabak.
4. The original description.lua is modified to comment out the country variable.

## Instructions
IN PROGRESS

## Future Functionality: 

- Allow user to revert the description.lua to the backups
- Allow user to request a prompt for each file
