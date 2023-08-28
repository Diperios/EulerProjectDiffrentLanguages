import os

languages = {'C':'c', 'C#':'cs', 'Go':'go', 'Lua':'lua', 'JavaScript':'js', 'Ruby':'rb', 'Python':'py'}

os.makedirs('EulerProjectSolutions', exist_ok=True)

problems = 1

for lang, file_ext in languages.items():
    lang_dir = os.path.join('EulerProjectSolutions', lang)
    os.makedirs(lang_dir, exist_ok=True)
    for problem in range(problems, problems+10):
        print(f'Creating {lang} solution for problem {problem}')
        problem_file = os.path.join(lang_dir, f'problem_{problem}.{file_ext}')
        with open(problem_file, 'w') as f:
            f.write(f'Solve Euler Project problem {problem} in {lang}')
    
    problems += 10