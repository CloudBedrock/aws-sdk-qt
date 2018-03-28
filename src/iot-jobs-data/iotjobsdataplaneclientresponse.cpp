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

#include "iotjobsdataplaneclientresponse.h"
#include "iotjobsdataplaneclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace IoTJobsDataPlane {

/**
 * @class  IoTJobsDataPlaneClientResponse
 *
 * @brief  Handles  IoTJobsDataPlaneClient responses.
 *
 * @see    Client::ioTJobsDataPlaneClient
 */

/**
 * @brief  Constructs a new IoTJobsDataPlaneClientResponse object.
 *
 * @param  parent   This object's parent.
 */
IoTJobsDataPlaneClientResponse::IoTJobsDataPlaneClientResponse(QObject * const parent)
    : AwsAbstractResponse(new IoTJobsDataPlaneClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  IoTJobsDataPlaneClientResponsePrivate
 *
 * @brief  Private implementation for IoTJobsDataPlaneClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new IoTJobsDataPlaneClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public IoTJobsDataPlaneClientResponse instance.
 */
IoTJobsDataPlaneClientResponsePrivate::IoTJobsDataPlaneClientResponsePrivate(
    IoTJobsDataPlaneClientQueueResponse * const q) : IoTJobsDataPlaneClientPrivate(q)
{

}

} // namespace IoTJobsDataPlane
} // namespace AWS
