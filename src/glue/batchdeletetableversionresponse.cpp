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

#include "batchdeletetableversionresponse.h"
#include "batchdeletetableversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/**
 * @class  BatchDeleteTableVersionResponse
 *
 * @brief  Handles Glue BatchDeleteTableVersion responses.
 *
 * @see    GlueClient::batchDeleteTableVersion
 */

/**
 * @brief  Constructs a new BatchDeleteTableVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchDeleteTableVersionResponse::BatchDeleteTableVersionResponse(
        const BatchDeleteTableVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new BatchDeleteTableVersionResponsePrivate(this), parent)
{
    setRequest(new BatchDeleteTableVersionRequest(request));
    setReply(reply);
}

const BatchDeleteTableVersionRequest * BatchDeleteTableVersionResponse::request() const
{
    Q_D(const BatchDeleteTableVersionResponse);
    return static_cast<const BatchDeleteTableVersionRequest *>(d->request);
}

/**
 * @brief  Parse a Glue BatchDeleteTableVersion response.
 *
 * @param  response  Response to parse.
 */
void BatchDeleteTableVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BatchDeleteTableVersionResponsePrivate
 *
 * @brief  Private implementation for BatchDeleteTableVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchDeleteTableVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchDeleteTableVersionResponse instance.
 */
BatchDeleteTableVersionResponsePrivate::BatchDeleteTableVersionResponsePrivate(
    BatchDeleteTableVersionResponse * const q) : GlueResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glue BatchDeleteTableVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchDeleteTableVersionResponsePrivate::BatchDeleteTableVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDeleteTableVersionResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
