import pandas as pd
import re
import os
# 処理対象のファイルが格納されているフォルダのパス
folder_path = 'C:\\Users\\RenToriyama\\OneDrive\\処理対象フォルダ'
# 処理対象フォルダ内のすべてのファイルをループで処理
for filename in os.listdir(folder_path):
    if filename.endswith(".xlsx"):
        # Excelファイルのフルパス
        input_excel = os.path.join(folder_path, filename)
        # ファイル名から数字を抽出してCSVファイル名を生成
        match = re.search(r'\d+', filename)
        if match:
            output_csv = os.path.join(folder_path, f'{match.group()}.csv')
            try:
                # エクセルファイルからシート3を読み込む
                df = pd.read_excel(input_excel, sheet_name='シート3')
                # 最初のヘッダー行を除外し、空白でないセルの内容のみを抽出
                data_to_export = df.iloc[1:].dropna().reset_index(drop=True)
                # '修正後のテキスト'列が実質的なB列に相当
                final_data = data_to_export['修正後のテキスト']
                # CSVファイルに書き込み
                final_data.to_csv(output_csv, index=False, header=False, encoding='utf-8')
                print(f"CSVファイルに書き込みが完了しました。ファイルパス: {output_csv}")
            except Exception as e:
                print(f"エラーが発生しました: {e}")
