import os

d = r'c:\Users\ue\OneDrive\Desktop\New Outfit Studio\android'
for r, _, fs in os.walk(d):
    for file in fs:
        if file.endswith(('.java', '.xml')):
            f = os.path.join(r, file)
            try:
                with open(f, 'r', encoding='utf-8') as file_obj:
                    c = file_obj.read()
                if '192.168.1.103' in c:
                    c = c.replace('192.168.1.103', '192.168.1.7')
                    with open(f, 'w', encoding='utf-8') as file_obj:
                        file_obj.write(c)
            except Exception:
                pass
