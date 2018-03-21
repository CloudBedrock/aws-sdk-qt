{% include "license.txt" %}
#ifndef QTAWS_{{ClassName|upper}}_H
#define QTAWS_{{ClassName|upper}}_H

#include "core/awsabstractclient.h"

class QNetworkReply;

{# @todo Consistent namespacing #}
class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace {{NameSpaceName}} {

class {{ClassName}}Private;
{% for name,op in operations.items %}
{% if op.input.shape %}
class {{name}}Request;
{% endif %}
class {{name}}Response;
{% endfor %}

class QTAWS_EXPORT {{ClassName}} : public AwsAbstractClient {
    Q_OBJECT

public:
    {{ClassName}}(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    {{ClassName}}(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
{% for name,op in operations.items %}
    {{name}}Response * {{name|slice:"0:1"|lower}}{{name|slice:"01:-1"}}({% if op.input.shape %}const {{name}}Request &request{% endif %});
{% endfor %}

private:
    Q_DECLARE_PRIVATE({{ClassName}})
    Q_DISABLE_COPY({{ClassName}})

};

} // namespace {{NameSpaceName}}
} // namespace AWS

#endif
