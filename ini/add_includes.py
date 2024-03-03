def add_line_after_directive(file_path, directive, line_to_add):
    """Adds a specific line after the last occurrence of the specified directive in a given file."""
    try:
        with open(file_path, 'r') as file:
            lines = file.readlines()

        last_directive_index = None
        for i, line in enumerate(lines):
            if line.strip().startswith(directive):
                last_directive_index = i

        if last_directive_index is not None:
            # Ensure there's a newline character at the end of the preceding line if it's not already there
            if not lines[last_directive_index].endswith('\n'):
                lines[last_directive_index] += '\n'
            lines.insert(last_directive_index + 1, line_to_add)
            with open(file_path, 'w') as file:
                file.writelines(lines)
            print(f"Successfully added: {line_to_add} to the file {file_path}")
        else:
            print(f"No {directive} directive found in the file {file_path}.")
    except IOError as e:
        print(f"An error occurred while processing the file {file_path}: {e}")

# Adjusting the list to include the directive along with file path and line to add
files_directives_and_lines = [
    ('experiencelevels.ini', '#define', '\n#include "\\got\\experiencelevels_got.inc"\n'),
    ('voice.ini', '#define', '\n#include "\\got\\voice_got.inc"\n'),
    ('commandset.ini', '#include', '\n#include "\\got\\commandset_got.inc"\n'),
    ('commandbutton.ini', '#include', '\n#include "\\got\\commandbutton_got.inc"\n'),
    ('soundeffects.ini', '#define', '\n#include "\\got\\soundeffects_got.inc"\n'),
    # Add more (file_path, directive, line_to_add) tuples as needed
]

for file_path, directive, line_to_add in files_directives_and_lines:
    add_line_after_directive(file_path, directive, line_to_add)
