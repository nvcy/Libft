from pathlib import Path

MAINDIR = Path("./src")
TESTDIR = Path("./test")

TESTDIR.mkdir(parents=True, exist_ok=True)

for file in MAINDIR.iterdir():
    if file.is_file():
        test_file = TESTDIR / f"test_{file.name}"
        test_file.touch()