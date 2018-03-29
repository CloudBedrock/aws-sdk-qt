/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "assumerolewithsamlresponse.h"
#include "assumerolewithsamlresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace STS {

/**
 * @class  AssumeRoleWithSAMLResponse
 *
 * @brief  Handles STS AssumeRoleWithSAML responses.
 *
 * @see    STSClient::assumeRoleWithSAML
 */

/**
 * @brief  Constructs a new AssumeRoleWithSAMLResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssumeRoleWithSAMLResponse::AssumeRoleWithSAMLResponse(
        const AssumeRoleWithSAMLRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AssumeRoleWithSAMLResponse(new AssumeRoleWithSAMLResponsePrivate(this), parent)
{
    setRequest(new AssumeRoleWithSAMLRequest(request));
    setReply(reply);
}

const AssumeRoleWithSAMLRequest * AssumeRoleWithSAMLResponse::request() const
{
    Q_D(const AssumeRoleWithSAMLResponse);
    return static_cast<const AssumeRoleWithSAMLRequest *>(d->request);
}

/**
 * @brief  Parse a STS AssumeRoleWithSAML response.
 *
 * @param  response  Response to parse.
 */
void AssumeRoleWithSAMLResponse::parseSuccess(QIODevice &response)
{
    Q_D(AssumeRoleWithSAMLResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AssumeRoleWithSAMLResponsePrivate
 *
 * @brief  Private implementation for AssumeRoleWithSAMLResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssumeRoleWithSAMLResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssumeRoleWithSAMLResponse instance.
 */
AssumeRoleWithSAMLResponsePrivate::AssumeRoleWithSAMLResponsePrivate(
    AssumeRoleWithSAMLResponse * const q) : STSResponsePrivate(q)
{

}

/**
 * @brief  Parse an STS AssumeRoleWithSAMLResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssumeRoleWithSAMLResponsePrivate::parseAssumeRoleWithSAMLResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssumeRoleWithSAMLResponse"));
    /// @todo
}

} // namespace STS
} // namespace QtAws
