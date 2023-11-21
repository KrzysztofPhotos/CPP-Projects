import os

def delete_exe_files(directory):
    for root, dirs, files in os.walk(directory):
        for file in files:
            if file.endswith(".exe"):
                file_path = os.path.join(root, file)
                os.remove(file_path)
                print(f"Deleted: {file_path}")

if __name__ == "__main__":
    # Get the current script's directory
    script_directory = os.path.dirname(os.path.abspath(__file__))

    # Call the function to delete .exe files
    delete_exe_files(script_directory)