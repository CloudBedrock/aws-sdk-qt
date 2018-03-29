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

#include "deletesamlproviderresponse.h"
#include "deletesamlproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  DeleteSAMLProviderResponse
 *
 * @brief  Handles IAM DeleteSAMLProvider responses.
 *
 * @see    IAMClient::deleteSAMLProvider
 */

/**
 * @brief  Constructs a new DeleteSAMLProviderResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSAMLProviderResponse::DeleteSAMLProviderResponse(
        const DeleteSAMLProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeleteSAMLProviderResponse(new DeleteSAMLProviderResponsePrivate(this), parent)
{
    setRequest(new DeleteSAMLProviderRequest(request));
    setReply(reply);
}

const DeleteSAMLProviderRequest * DeleteSAMLProviderResponse::request() const
{
    Q_D(const DeleteSAMLProviderResponse);
    return static_cast<const DeleteSAMLProviderRequest *>(d->request);
}

/**
 * @brief  Parse a IAM DeleteSAMLProvider response.
 *
 * @param  response  Response to parse.
 */
void DeleteSAMLProviderResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteSAMLProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteSAMLProviderResponsePrivate
 *
 * @brief  Private implementation for DeleteSAMLProviderResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSAMLProviderResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteSAMLProviderResponse instance.
 */
DeleteSAMLProviderResponsePrivate::DeleteSAMLProviderResponsePrivate(
    DeleteSAMLProviderResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM DeleteSAMLProviderResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteSAMLProviderResponsePrivate::parseDeleteSAMLProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSAMLProviderResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
