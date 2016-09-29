### Convert all .pdf files to .txt
    for file in *.pdf; do pdftotext "$file" "$file.txt"; done
