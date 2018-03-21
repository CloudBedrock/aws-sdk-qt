/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "exportbundleresponse.h"
#include "exportbundleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Mobile {

/**
 * @class  ExportBundleResponse
 *
 * @brief  Handles Mobile ExportBundle responses.
 *
 * @see    MobileClient::exportBundle
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ExportBundleResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MobileResponse(new ExportBundleResponsePrivate(this), parent)
{
    setRequest(new ExportBundleRequest(request));
    setReply(reply);
}

const ExportBundleRequest * ExportBundleResponse::request() const
{
    Q_D(const ExportBundleResponse);
    return static_cast<const ExportBundleRequest *>(d->request);
}

/**
 * @brief  Parse a Mobile ExportBundle response.
 *
 * @param  response  Response to parse.
 */
void ExportBundleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ExportBundleResponsePrivate
 *
 * @brief  Private implementation for ExportBundleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ExportBundleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ExportBundleResponse instance.
 */
ExportBundleResponsePrivate::ExportBundleResponsePrivate(
    ExportBundleQueueResponse * const q) : ExportBundlePrivate(q)
{

}

/**
 * @brief  Parse an Mobile ExportBundleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ExportBundleResponsePrivate::ExportBundleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExportBundleResponse"));
    /// @todo
}
