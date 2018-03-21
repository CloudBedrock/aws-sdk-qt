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

#include "createtypedlinkfacetresponse.h"
#include "createtypedlinkfacetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudDirectory {

/**
 * @class  CreateTypedLinkFacetResponse
 *
 * @brief  Handles CloudDirectory CreateTypedLinkFacet responses.
 *
 * @see    CloudDirectoryClient::createTypedLinkFacet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateTypedLinkFacetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new CreateTypedLinkFacetResponsePrivate(this), parent)
{
    setRequest(new CreateTypedLinkFacetRequest(request));
    setReply(reply);
}

const CreateTypedLinkFacetRequest * CreateTypedLinkFacetResponse::request() const
{
    Q_D(const CreateTypedLinkFacetResponse);
    return static_cast<const CreateTypedLinkFacetRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory CreateTypedLinkFacet response.
 *
 * @param  response  Response to parse.
 */
void CreateTypedLinkFacetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateTypedLinkFacetResponsePrivate
 *
 * @brief  Private implementation for CreateTypedLinkFacetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateTypedLinkFacetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateTypedLinkFacetResponse instance.
 */
CreateTypedLinkFacetResponsePrivate::CreateTypedLinkFacetResponsePrivate(
    CreateTypedLinkFacetQueueResponse * const q) : CreateTypedLinkFacetPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory CreateTypedLinkFacetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateTypedLinkFacetResponsePrivate::CreateTypedLinkFacetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTypedLinkFacetResponse"));
    /// @todo
}
