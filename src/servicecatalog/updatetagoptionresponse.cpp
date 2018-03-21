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

#include "updatetagoptionresponse.h"
#include "updatetagoptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  UpdateTagOptionResponse
 *
 * @brief  Handles ServiceCatalog UpdateTagOption responses.
 *
 * @see    ServiceCatalogClient::updateTagOption
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateTagOptionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new UpdateTagOptionResponsePrivate(this), parent)
{
    setRequest(new UpdateTagOptionRequest(request));
    setReply(reply);
}

const UpdateTagOptionRequest * UpdateTagOptionResponse::request() const
{
    Q_D(const UpdateTagOptionResponse);
    return static_cast<const UpdateTagOptionRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog UpdateTagOption response.
 *
 * @param  response  Response to parse.
 */
void UpdateTagOptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateTagOptionResponsePrivate
 *
 * @brief  Private implementation for UpdateTagOptionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTagOptionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateTagOptionResponse instance.
 */
UpdateTagOptionResponsePrivate::UpdateTagOptionResponsePrivate(
    UpdateTagOptionQueueResponse * const q) : UpdateTagOptionPrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog UpdateTagOptionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateTagOptionResponsePrivate::UpdateTagOptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTagOptionResponse"));
    /// @todo
}
