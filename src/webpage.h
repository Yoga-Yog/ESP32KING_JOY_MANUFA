// webpage.h
#ifndef WEBPAGE_H
#define WEBPAGE_H

// Определяем строковую переменную с HTML-кодом
const char* webSiteContent = R"(
<!DOCTYPE HTML>
<META name='viewport' content='width=device-width, initial-scale=1', charset="utf-8">
<link rel='shortcut icon' type='image/x-icon' href='/favicon'>
<style>
    /* Основные стили */
    body { background-color: #2E2E2E; color: #FFFFFF; font-family: Arial, sans-serif; text-align: center; margin: 0; padding: 10px; }
    .container { display: flex; flex-direction: column; align-items: center; max-width: 1000px; margin: auto; }

    /* Вкладки */
    .tabs { display: flex; justify-content: center; gap: 10px; margin-bottom: 20px; flex-wrap: wrap; }
    .tab { padding: 10px; cursor: pointer; background-color: #444; color: white; border-radius: 5px; flex: 1; text-align: center; min-width: 100px; }
    .tab.active { background-color: #666; }
    .tab-content { display: none; padding: 20px; }
    .tab-content.active { display: block; }

    /* Кнопки */
    .button-container { display: flex; flex-wrap: wrap; justify-content: center; gap: 10px; max-width: 600px; }
    button { border: solid 2px #00FF00; border-radius: 30px; font-size: 16px; background: #444; color: white; width: 160px; padding: 10px; cursor: pointer; }
    button:hover { border-color: pink; background: #555; }

    /* Поля ввода */
    .input-container { display: flex; flex-wrap: wrap; justify-content: center; gap: 10px; max-width: 600px; }
    input { width: 100%; max-width: 200px; height: 30px; border-radius: 5px; padding: 5px; background: #222; color: #DDD; text-align: center; }

    /* Таблицы */
    .table-container { display: flex; flex-wrap: wrap; gap: 20px; justify-content: center; max-width: 800px; }
    .table-wrapper { width: 100%; max-width: 400px; }
    table { width: 100%; border-collapse: collapse; border: 2px solid white; }
    th, td { padding: 10px; border: 1px solid maroon; text-align: center; background: #333; color: white; }
</style>
<BODY onload='process()'>
<!-- Вкладки для навигации -->
<div id="tabsbuts">
  <span class='tab' onclick='openTab(event, "tab1")'>Основное</span>
  <span class='tab' onclick='openTab(event, "tab2")'>Настройки</span>
  <span class='tab' onclick='openTab(event, "tab3")'>Коды</span>
</div>
<!-- Содержимое вкладок -->
<div id='tab1' class='tabcontent active-tab'>
<br>
Время работы = <A ID='runtime'></A><br>
Сила сигнала <A ID='Sila'></A><br>
CodeGrabing<br> <A ID='Batareya'></A><br>
Пакет2: <A ID='Paket'></A><br>
Пакет1: <A ID='Paket1'></A><br>
<table>
  <tr>
    <td><button id='button' onclick='doFunction();'>Send code Starline1</button></td>
    <td><button id='buz' onclick='doFunction();'>Send code Starline2</button></td>
    <td><button id='but_glushilka' onclick='doFunction();'>Glushika</button></td>
    <td><input id='glushilk' class='input1_c' type='text' name='id' value='1'></td>
  </tr>
  <tr>
    <td><button id='kee1' onclick='doFunction();'>Send code Keeloq1</button></td>
    <td><button id='kee2' onclick='doFunction();'>Send code Keeloq2</button></td>
    <td><button id='but_Freq' onclick='doFunction();'>SetFreq</button></td>
    <td><input id='freq_in' class='input1_c' type='text' name='id' value='433.92' list='freqs'></td>
  </tr>
</table>
<datalist id='freqs'>
  <option value='315.92'></option>
  <option value='433.92'></option>
  <option value='868.92'></option>
  <option value='915.92'></option>
</datalist>
<div id='sending'></div>
<p>PRIEM</p>
<table>
  <tr>
    <td><button id='prion' onclick='doFunction();'>ON</button></td>
    <td><button id='prioff' onclick='doFunction();'>OFF</button></td>
    <td><button id='mana' onclick='doFunction();'>MANAFAKA</button></td>
  </tr><br>
  <tr>
  <td><p>SETBUTTONVALUECODES</p></td>
  </tr>
  <tr>
<td> <input type="text" name="buttonval_open" minlength="2" maxlength="2" value="42" id="buttonval_open" class="input1_c"></td>
<td> <input type="text" name="buttonval_close" minlength="2" maxlength="2" value="46" id="buttonval_close" class="input1_c"></td>
 <td><button id='setbuttonvaues' onclick='doFunction();'>setbuttonvaues</button></td>
  </tr>
</table><br>
<p>SEND SHLAK</p>
<table>
  <tr>
    <td><button id='manaopen' onclick='doFunction();'>MANAFAKAOPEN</button></td>
    <td><button id='sendshlak' onclick='doFunction();'>SHLAKSEND</button></td>
    <td><button id='shlakoff' onclick='doFunction();'>SHLAKOFF</button></td>
  </tr>
</table><br>
<p>StopSigi</p>
<table>
  <tr>
    <td><a href="StopSigi"><button>StopSigi</button></a></td>
    <td><a href="StatSigi"><button>StartSigi</button></a></td>
  </tr>
</table><br>
<p>BRUTSHLAK</p>
<table>
  <tr>
    <td><a href="ShlakOn"><button>BRUT1</button></a></td>
    <td><a href="BrutSh2"><button>BRUT2</button></a></td>
  </tr>
  <br>
  <tr>
    <td><button id='brut_g' onclick='doFunction();'>BRUTSHLAK_G</button></td>
  </tr>
</table>
<p>ВЫброс шлакоёбов GAME</p><br>
<form action="GETS" method="GET">
  <input type="text" name="name" minlength="4" maxlength="4" value="0001" id="input1" class="input1_c"><br>
  <input type="submit" value="SEND" id="button_s" class="button_s">
</form>
<p>ВЫброс шлакоёбов NICE</p><br>
<form id="form2" action="GETSN" method="GET">
  <input type="text" name="name" minlength="8" maxlength="8" value="10130001" id="input1" class="input1_c"><br>
  <input type="submit" value="SEND" id="button_s" class="button_s">
</form>
<p>Starline byte send</p>
<form id="form2G" action="GETSNGS" method="GET">
  <input type="text" name="name" minlength="9" maxlength="40" value="003;003;003;003;003;003;003;003;003" id="input1G" class="input1_c"><br>
  <input type="submit" value="SEND" id="button_sG" class="button_s">
</form>
</div>
  <div id="tab2" class="tabcontent">
    <h3>Настройки</h3>
   
  </div>

<div id="tab3" class="tabcontent">
<h2>Сохранённые коды (STA)</h2>
<div class="table-container">
    <div class="table-wrapper">
        <table id="staCodeTable">
            <thead>
                <tr>
                    <th>№</th>
                    <th>Код</th>
                    <th>Действие</th>
                </tr>
            </thead>
            <tbody id="staCodeList">
                <!-- Строки с кодами будут добавляться здесь -->
            </tbody>
        </table>
    </div>

    <div class="table-wrapper">
        <h2>Сохранённые коды (KEE)</h2>
        <table id="keeCodeTable">
            <thead>
                <tr>
                    <th>№</th>
                    <th>Код</th>
                    <th>Действие</th>
                </tr>
            </thead>
            <tbody id="keeCodeList">
                <!-- Строки с кодами будут добавляться здесь -->
            </tbody>
        </table>
    </div>
</div>
</div>

</BODY>
</HTML>
)";

#endif