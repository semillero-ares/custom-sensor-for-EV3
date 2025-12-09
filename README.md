Para crear mkdocs debemos tener instalado mkdocs

```
pip install mkdocs
mkdocs new .
```

## For main branch
```bash
git init
git add .
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/semillero-ares/custom-sensor-for-EV3.git
git push -u origin main
```

## For mkdocs branch
```bash
git init
git checkout --orphan docs
git add .
git commit -m "initial docs commit"
git remote add origin https://github.com/semillero-ares/custom-sensor-for-EV3.git
git push -u origin docs
```

## For gh-pages
```
mkdocs gh-deploy
```