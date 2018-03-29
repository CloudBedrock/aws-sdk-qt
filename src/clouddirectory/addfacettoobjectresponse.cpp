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

#include "addfacettoobjectresponse.h"
#include "addfacettoobjectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  AddFacetToObjectResponse
 *
 * @brief  Handles CloudDirectory AddFacetToObject responses.
 *
 * @see    CloudDirectoryClient::addFacetToObject
 */

/**
 * @brief  Constructs a new AddFacetToObjectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddFacetToObjectResponse::AddFacetToObjectResponse(
        const AddFacetToObjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new AddFacetToObjectResponsePrivate(this), parent)
{
    setRequest(new AddFacetToObjectRequest(request));
    setReply(reply);
}

const AddFacetToObjectRequest * AddFacetToObjectResponse::request() const
{
    Q_D(const AddFacetToObjectResponse);
    return static_cast<const AddFacetToObjectRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory AddFacetToObject response.
 *
 * @param  response  Response to parse.
 */
void AddFacetToObjectResponse::parseSuccess(QIODevice &response)
{
    Q_D(AddFacetToObjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AddFacetToObjectResponsePrivate
 *
 * @brief  Private implementation for AddFacetToObjectResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddFacetToObjectResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddFacetToObjectResponse instance.
 */
AddFacetToObjectResponsePrivate::AddFacetToObjectResponsePrivate(
    AddFacetToObjectResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory AddFacetToObjectResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddFacetToObjectResponsePrivate::parseAddFacetToObjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddFacetToObjectResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace QtAws
