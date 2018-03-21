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

#include "deletetagoptionresponse.h"
#include "deletetagoptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  DeleteTagOptionResponse
 *
 * @brief  Handles ServiceCatalog DeleteTagOption responses.
 *
 * @see    ServiceCatalogClient::deleteTagOption
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteTagOptionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DeleteTagOptionResponsePrivate(this), parent)
{
    setRequest(new DeleteTagOptionRequest(request));
    setReply(reply);
}

const DeleteTagOptionRequest * DeleteTagOptionResponse::request() const
{
    Q_D(const DeleteTagOptionResponse);
    return static_cast<const DeleteTagOptionRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog DeleteTagOption response.
 *
 * @param  response  Response to parse.
 */
void DeleteTagOptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteTagOptionResponsePrivate
 *
 * @brief  Private implementation for DeleteTagOptionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTagOptionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteTagOptionResponse instance.
 */
DeleteTagOptionResponsePrivate::DeleteTagOptionResponsePrivate(
    DeleteTagOptionQueueResponse * const q) : DeleteTagOptionPrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog DeleteTagOptionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteTagOptionResponsePrivate::DeleteTagOptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTagOptionResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace AWS
