# Set PostgreSQL
This file contains all about running PostgreSQL on macOS. Install PostgreSQL on local or on docker and then connects with datagrip.

## Download local
1. Install Homebrew
If you don't have Homebrew installed, it's a package manager for macOS that makes it easy to install various software, including PostgreSQL. Open Terminal and run the following command to install Homebrew:
```
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```

2. Set env to use `brew` command
```
echo 'eval "$(/opt/homebrew/bin/brew shellenv)"' >> /Users/daisy12/.profile
eval "$(/opt/homebrew/bin/brew shellenv)"
```

3. Get `homebrew/core`
```
brew tap homebrew/core
```

4. Download postgresql
```
brew install postgresql
```

5. Start PostgreSQL server

This command will start PostgreSQL as a background service, and it will automatically start every time you boot your Mac.

```
brew services start postgresql
```

Check PostgreSql status
```
brew services list
```

6. Create a Database
If you intended to connect to a specific database, you'll need to make sure that database exists. You can create a new database using the following SQL command from within 
```
createdb -U daisy12 daisy12
```

8. Connect to new Database
```
psql -U your-username -d your-database-name
```

## Use Docker to install PostgrSQL
May be next time.

## Use School server
[in-ui-ye-ji cluster](https://skkuoverflow.com/ko/posts/school/inuiyeji/)

__Enter server__
```
ssh swji.skku.edu -l {user ID} -p {port number}
{enter password}
```

__Login PostgreSQL__
```
psql -h localhost -U db{user ID[1:]}
{enter password}
```

__exit__
```
exit
```

## Set Datagrip
Datagrip is a database IDE by JetBrains it provides development for OracleDB, MongoDB, MySQL, PostgrSQL.