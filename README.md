Para crear mkdocs debemos tener instalado mkdocs

```
pip install mkdocs
mkdocs new .
```

para trabajar de manera más comoda usaremos:


```
mkdocs serve --livereload
```

## Para la rama **main**

```bash
git init
git add .
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/semillero-ares/custom-sensor-for-EV3.git
git push -u origin main
```

## Para la rama **docs**

```bash
git init
git checkout --orphan docs
git add .
git commit -m "initial docs commit"
git remote add origin https://github.com/semillero-ares/custom-sensor-for-EV3.git
git push -u origin docs
```

## Para la rama **gh-pages**

```
mkdocs gh-deploy
```