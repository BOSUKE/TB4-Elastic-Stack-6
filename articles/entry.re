= はじまるよ


みなさんログは好きですか？@<br>{}
今までたくさんのログを見てこられた方は多くいるのではないでしょうか。@<br>{}
そして、多くの苦労を伴ってきたのではないでしょうか。@<br>{}
これからエンジニアとなり、ログと向き合うことになる方もいるかと思います。@<br>{}
そんな方々へ、少しでもログの楽しさが伝われば嬉しいなと思ってます。  


== こんな流れで話すよ


それでは、ここから具体的にどんな内容について書いてあるのかざっくり書くと、ログの取込方法や、多種多様なログフォーマットに合わせたフィルターの書き方などについてです。

 1. 使用するプロダクトや環境について
 1. Logstashを使ってみる
 1. Beatsという便利なデータシッパーを使ってみる
 1. まとめ


== 使用するプロダクトと実行環境について


Elasticsearch社が提供するElastic Stackを利用します。@<br>{}
以下のプロダクトを利用してログの世界に触れていきたいと思います。

 * Elasticsearch 6.2.2
 * Logstash 6.2.2
 * Kibana 6.2.2
 * Metricbeat 6.2.2
 * Auditbeat 6.2.2
 * Packetbeat 6.2.2


//quote{
Download Elastic Stack@<br>{}
https://www.elastic.co/jp/products

//}


簡単にこれらのプロダクトについて紹介します。


=== Elasticsearch


Elasticsaerchは、オープンソースの分散型RESTfull検索/分析エンジンです。@<br>{}
今回、Logstashのストア先として利用します。


=== Logstash


Logstashは、オープンソースログ収集管理ツールです。@<br>{}
取り込み先としては、検索エンジンのElasticsearchと組み合わせることでニアリアルタイムにログを取り込むことができます。


=== kibana


Kibanaは、オープンソースのビジュアライズツールです。@<br>{}
Elasticserchのデータをビジュアライズします。


=== Beats


Beatsは、様々な用途に合わせてデータを容易に送ることができるオープンソースの軽量データシッパーです。@<br>{}
Beatsファミリーとして、以下があります。

 * Filebeat
 * Metricbeat
 * Packetbeat
 * Winlogbeat
 * Auditbeat
 * Heartbeat


=== Elastic Stackを動かす実行環境


* Amazon Linux AMI 2017.09.1 (HVM), SSD Volume Type - ami-97785bed
* t2.medium
  - vCPU: 2
  - Mem: 4

