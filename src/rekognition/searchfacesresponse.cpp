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

#include "searchfacesresponse.h"
#include "searchfacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Rekognition {

/**
 * @class  SearchFacesResponse
 *
 * @brief  Handles Rekognition SearchFaces responses.
 *
 * @see    RekognitionClient::searchFaces
 */

/**
 * @brief  Constructs a new SearchFacesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SearchFacesResponse::SearchFacesResponse(
        const SearchFacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new SearchFacesResponsePrivate(this), parent)
{
    setRequest(new SearchFacesRequest(request));
    setReply(reply);
}

const SearchFacesRequest * SearchFacesResponse::request() const
{
    Q_D(const SearchFacesResponse);
    return static_cast<const SearchFacesRequest *>(d->request);
}

/**
 * @brief  Parse a Rekognition SearchFaces response.
 *
 * @param  response  Response to parse.
 */
void SearchFacesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SearchFacesResponsePrivate
 *
 * @brief  Private implementation for SearchFacesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SearchFacesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SearchFacesResponse instance.
 */
SearchFacesResponsePrivate::SearchFacesResponsePrivate(
    SearchFacesQueueResponse * const q) : SearchFacesPrivate(q)
{

}

/**
 * @brief  Parse an Rekognition SearchFacesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SearchFacesResponsePrivate::SearchFacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchFacesResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace AWS
